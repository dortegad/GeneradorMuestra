#include "visor.h"
#include "ui_visor.h"

#include "QFileDialog"
#include <dirent.h>
#include <sstream>
#include <fstream>

//-------------------------------------------------------------------------------------------------
Visor::Visor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Visor)
{
    ui->setupUi(this);
}

//-------------------------------------------------------------------------------------------------
Visor::~Visor()
{
    delete ui;
}



//-------------------------------------------------------------------------------------------
void Visor::muestraImagen(QLabel *etiquetaPresentar, cv::Mat &img)
{
    //imgInFrame = img;
    cv::Mat imgMostrar;
    if (img.channels() == 1)
        cv::cvtColor(img,imgMostrar,CV_GRAY2RGB);
    else
        cv::cvtColor(img,imgMostrar,CV_BGR2RGB);
    QImage imagenQT = QImage((const unsigned char *)imgMostrar.data, imgMostrar.cols, imgMostrar.rows, imgMostrar.step, QImage::Format_RGB888);
    etiquetaPresentar->setScaledContents(true);
    etiquetaPresentar->setPixmap(QPixmap::fromImage(imagenQT));
    etiquetaPresentar->setGeometry(0,0,imagenQT.width(),imagenQT.height());
}


//-------------------------------------------------------------------------------------------
void Visor::muestraPatronesPositivos()
{
    cv::Mat imagen = cv::imread(this->ficherosPatronesPositivos[this->patronPositivoActual]);
    muestraImagen(this->ui->LImgPatronesPositivos,imagen);
   // ui->pBProcesar->setEnabled(true);
}

//-------------------------------------------------------------------------------------------
void Visor::muestraPatronesNegativos()
{
    cv::Mat imagen = cv::imread(this->ficherosPatronesNegativos[this->patronNegativoActual]);
    muestraImagen(this->ui->LImgPatronesNegativos,imagen);
   // ui->pBProcesar->setEnabled(true);
}


//-------------------------------------------------------------------------------------------------
void Visor::leerFicherosPatrones(const std::string &nombreDir, std::vector <std::string > &vectorFicheroPatrones)
{
    DIR *dir;
    struct dirent *ent;

    dir = opendir (nombreDir.c_str());
    if (dir == NULL)
    {
        msgBox.setText("Error al abrir directorio.");
        msgBox.exec();
    }

    vectorFicheroPatrones.clear();
    while ((ent = readdir (dir)) != NULL)
    {
        if ( (strcmp(ent->d_name, ".")!=0) && (strcmp(ent->d_name, "..")!=0) )
        {
            std::stringstream nombreFich;
            nombreFich << nombreDir << "/" << ent->d_name;
            vectorFicheroPatrones.push_back(nombreFich.str());
        }
    }
    closedir (dir);
}

//-------------------------------------------------------------------------------------------------
void Visor::leerDirectorioPatronesPositivos(QString &dirPatronesPositivos)
{
    ui->lEPatronesPositivos->setText(dirPatronesPositivos);

    leerFicherosPatrones(dirPatronesPositivos.toStdString(),this->ficherosPatronesPositivos);
    this->patronPositivoActual = 0;
    muestraPatronesPositivos();
    estadoBotones();

}

//-------------------------------------------------------------------------------------------------
void Visor::on_pBDirPatronesPositivos_clicked()
{
    dirPatronesPositivos = QFileDialog::getExistingDirectory(this, tr("Directorio patrones positivos"),
                                                         ui->lEPatronesPositivos->text(),
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
    if (dirPatronesPositivos == "")
        return;

    leerDirectorioPatronesPositivos(dirPatronesPositivos);
}

//-------------------------------------------------------------------------------------------------
void Visor::on_pBDirPatronesNegativos_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this, tr("Directorio patrones negativos"),
                                                         ui->lEPatronesNegativos->text(),
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
    if (dirName == "")
        return;


    ui->lEPatronesNegativos->setText(dirName);
    leerFicherosPatrones(dirName.toStdString(),this->ficherosPatronesNegativos);
    this->patronNegativoActual = 0;
    muestraPatronesNegativos();
    estadoBotones();
}

//-------------------------------------------------------------------------------------------------
void Visor::on_pBSigPatronPositivo_clicked()
{
    if (this->patronPositivoActual+1 < this->ficherosPatronesPositivos.size())
    {
        this->patronPositivoActual++;
        estadoBotones();
        this->muestraPatronesPositivos();
    }
}

//-------------------------------------------------------------------------------------------------
void Visor::on_pBAntPatronPositivo_clicked()
{
    if (this->patronPositivoActual > 0)
    {
        this->patronPositivoActual--;
        estadoBotones();
       this->muestraPatronesPositivos();
    }
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBAntPatronNegativo_clicked()
{
    if (this->patronNegativoActual > 0)
    {
        this->patronNegativoActual--;
        estadoBotones();
       this->muestraPatronesNegativos();
    }
}

//-------------------------------------------------------------------------------------------------
void Visor::on_pBSigPatronNegativo_clicked()
{
    if (this->patronNegativoActual+1 < this->ficherosPatronesNegativos.size())
    {
        this->patronNegativoActual++;
        estadoBotones();
        this->muestraPatronesNegativos();
    }
}

//-------------------------------------------------------------------------------------------
void Visor::estadoBotones()
{
    ui->pBSigPatronNegativo->setEnabled(false);
    ui->pBAntPatronNegativo->setEnabled(false);

    if (this->patronNegativoActual > 0)
        ui->pBAntPatronNegativo->setEnabled(true);

    if (this->patronNegativoActual+1 < this->ficherosPatronesNegativos.size())
        ui->pBSigPatronNegativo->setEnabled(true);

    ui->pBSigPatronPositivo->setEnabled(false);
    ui->pBAntPatronPositivo->setEnabled(false);

    if (this->patronPositivoActual > 0)
        ui->pBAntPatronPositivo->setEnabled(true);

    if (this->patronPositivoActual+1 < this->ficherosPatronesPositivos.size())
        ui->pBSigPatronPositivo->setEnabled(true);
}


//-------------------------------------------------------------------------------------------
void Visor::on_pBGeneraFicheroPatronesPositivos_clicked()
{
    QString nombreFichPatronesPositivos = QFileDialog:: QFileDialog::getSaveFileName(this, tr("Fichero patrones positivos"),
                                                                         "/home/jana/PatronesPositivos.info",
                                                                         tr("*.info"));
    if (nombreFichPatronesPositivos == "")
        return;

    msgBox.setText("Vamos a generar el fichero : \n " + nombreFichPatronesPositivos);
    msgBox.exec();

    std::ofstream fpatrones(nombreFichPatronesPositivos.toStdString().c_str());

    std::vector <std::string >::iterator itFich = this->ficherosPatronesPositivos.begin();
    for (;itFich!=this->ficherosPatronesPositivos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);

        fpatrones << fichero << " 1 0 0 " <<  img.cols << " " << img.rows << std::endl;

        img.release();
    }
    fpatrones.close();

    std::stringstream mensaje;
    mensaje << "fichero generado con " << this->ficherosPatronesPositivos.size()
            << " samples" << std::endl << nombreFichPatronesPositivos.toStdString();

    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBGeneraFicheroPatronesNegativos_clicked()
{
    QString nombreFichPatronesNegativos= QFileDialog:: QFileDialog::getSaveFileName(this, tr("Fichero patrones negativos"),
                                                                         "/home/jana/PatronesNegativos.txt",
                                                                         tr("*.txt"));
    if (nombreFichPatronesNegativos == "")
        return;

    msgBox.setText("Vamos a generar el fichero : \n " + nombreFichPatronesNegativos);
    msgBox.exec();

    std::ofstream fpatrones(nombreFichPatronesNegativos.toStdString().c_str());

    std::vector <std::string >::iterator itFich = this->ficherosPatronesNegativos.begin();
    for (;itFich!=this->ficherosPatronesNegativos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);

        fpatrones << fichero  << std::endl;

        img.release();
    }
    fpatrones.close();

    msgBox.setText("Fichero generado : \n " + nombreFichPatronesNegativos);
    msgBox.exec();
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBEscalarPatronesPositivos_clicked()
{
    int alto = ui->lEAltoPatronesPositivos->text().toInt();
    int ancho = ui->lEAnchoPatronesPositivos->text().toInt();

    std::stringstream mensaje;
    mensaje << "Se van a escalar todas la imagenes de patron positivo a: " << alto << " x " << ancho;
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
    setCursor(Qt::WaitCursor);

    std::vector <std::string >::iterator itFich = this->ficherosPatronesPositivos.begin();
    for (;itFich!=this->ficherosPatronesPositivos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);
        cv::resize(img,img,cv::Size(ancho,alto));
        cv::imwrite(fichero,img);
        img.release();
    }

    setCursor(Qt::ArrowCursor);
    mensaje.str("");
    mensaje << "Se han escalado todas la imagenes de patron positivo a: " << alto << " x " << ancho;
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBEspejarPatronesPositivos_clicked()
{
    std::stringstream mensaje;
    mensaje << "Se van a espejar horizontamente todas la imagenes de patron positivo." << std::endl <<
               "Se generara un fichero 'NombreImagen_ESPEJADO_H' por cada fichero de imagen.";
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
    setCursor(Qt::WaitCursor);

    std::vector <std::string >::iterator itFich = this->ficherosPatronesPositivos.begin();
    for (;itFich!=this->ficherosPatronesPositivos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);
        cv::flip(img,img,1);

        std::string extension = fichero.substr(fichero.length()-4,fichero.length());
        std::string nombreFichero = fichero.substr(0,fichero.length()-4);
        std::stringstream nombreNuevoFichero;
        nombreNuevoFichero << nombreFichero << "_ESPEJADO_H" << extension;
        cv::imwrite(nombreNuevoFichero.str(),img);

        img.release();
    }

    leerDirectorioPatronesPositivos(dirPatronesPositivos);

    setCursor(Qt::ArrowCursor);
    mensaje.str("");
    mensaje << "Se han espejar horizontamente todas la imagenes de patron positivo." << std::endl <<
               "Se ha generado un fichero 'NombreImagen_ESPEJADO_H' por cada fichero de imagen.";
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBEspejarVerticalPatronesPositivos_clicked()
{
    std::stringstream mensaje;
    mensaje << "Se van a espejar verticalmente todas la imagenes de patron positivo." << std::endl <<
               "Se generara un fichero 'NombreImagen_ESPEJADO_V' por cada fichero de imagen.";
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
    setCursor(Qt::WaitCursor);

    std::vector <std::string >::iterator itFich = this->ficherosPatronesPositivos.begin();
    for (;itFich!=this->ficherosPatronesPositivos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);
        cv::flip(img,img,0);

        std::string extension = fichero.substr(fichero.length()-4,fichero.length());
        std::string nombreFichero = fichero.substr(0,fichero.length()-4);
        std::stringstream nombreNuevoFichero;
        nombreNuevoFichero << nombreFichero << "_ESPEJADO_V" << extension;
        cv::imwrite(nombreNuevoFichero.str(),img);

        img.release();
    }

    leerDirectorioPatronesPositivos(dirPatronesPositivos);

    setCursor(Qt::ArrowCursor);
    mensaje.str("");
    mensaje << "Se han espejar verticalmente todas la imagenes de patron positivo." << std::endl <<
               "Se ha generado un fichero 'NombreImagen_ESPEJADO_V' por cada fichero de imagen.";
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
}

//-------------------------------------------------------------------------------------------
void Visor::on_pBGirarPatronesPositivos_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Sobrescribir o nuevo", "Desea realizar la accion sobre los ficheros existentes?",
                                                            QMessageBox::Yes|QMessageBox::No);
    bool sobrescribir = (reply == QMessageBox::Yes);

    std::stringstream mensaje;
    if (!sobrescribir)
    {
        mensaje << "Se van a girar 90 grados todas la imagenes de patron positivo." << std::endl <<
               "Se generara un fichero 'NombreImagen_GIR0_90' por cada fichero de imagen.";
    }
    else
    {
        mensaje << "Se van a girar 90 grados todas la imagenes de patron positivo." << std::endl <<
               "Se realizara el giro sobre las imagenes existentes.";
    }
    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
    setCursor(Qt::WaitCursor);

    std::vector <std::string >::iterator itFich = this->ficherosPatronesPositivos.begin();
    for (;itFich!=this->ficherosPatronesPositivos.end();itFich++)
    {
        std::string fichero = (*itFich);
        cv::Mat img = cv::imread(fichero);
        cv::flip(img,img,0);

        cv::transpose(img,img);
        cv::flip(img,img,1);

        if (!sobrescribir)
        {
            std::string extension = fichero.substr(fichero.length()-4,fichero.length());
            std::string nombreFichero = fichero.substr(0,fichero.length()-4);
            std::stringstream nombreNuevoFichero;
            nombreNuevoFichero << nombreFichero << "_GIRO_90" << extension;
            cv::imwrite(nombreNuevoFichero.str(),img);
        }
        else
            cv::imwrite(fichero,img);

        img.release();
    }

    leerDirectorioPatronesPositivos(dirPatronesPositivos);

    setCursor(Qt::ArrowCursor);
    mensaje.str("");
    if (!sobrescribir)
    {
        mensaje << "Se han girar 90 grados todas la imagenes de patron positivo." << std::endl <<
                   "Se ha generado un fichero 'NombreImagen_GIR0_90' por cada fichero de imagen.";
    }
    else
    {
        mensaje << "Se han girar 90 grados todas la imagenes de patron positivo." << std::endl <<
                   "Se ha realizado el giro sobre las imagenes existentes.";
    }

    msgBox.setText(mensaje.str().c_str());
    msgBox.exec();
}
