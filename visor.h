#ifndef VISOR_H
#define VISOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <string>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

namespace Ui {
class Visor;
}

class Visor : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Visor(QWidget *parent = 0);
    ~Visor();
    
private slots:

    void on_pBDirPatronesPositivos_clicked();

    void on_pBDirPatronesNegativos_clicked();

    void on_pBSigPatronPositivo_clicked();

    void on_pBAntPatronPositivo_clicked();

    void on_pBSigPatronNegativo_clicked();

    void on_pBAntPatronNegativo_clicked();

    void on_pBGeneraFicheroPatronesPositivos_clicked();

    void on_pBGeneraFicheroPatronesNegativos_clicked();

    void on_pBEscalarPatronesPositivos_clicked();

    void on_pBEspejarPatronesPositivos_clicked();

    void on_pBEspejarVerticalPatronesPositivos_clicked();

    void on_pBGirarPatronesPositivos_clicked();

private:
    Ui::Visor *ui;
    QMessageBox msgBox;

    std::vector <std::string > ficherosPatronesPositivos;
    int patronPositivoActual;
    std::vector <std::string > ficherosPatronesNegativos;
    int patronNegativoActual;
    QString dirPatronesPositivos;

    void leerFicherosPatrones(const std::string &nombreDir, std::vector <std::string > &vectorFicheroPatrones);
    void leerDirectorioPatronesPositivos(QString &dirPatronesPositivos);

    void muestraImagen(QLabel *etiquetaPresentar, cv::Mat &img);
    void muestraPatronesPositivos();
    void muestraPatronesNegativos();

    void estadoBotones();
};

#endif // VISOR_H
