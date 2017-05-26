#ifndef ESTUDIO_H
#define ESTUDIO_H


class Estudio{
    private:
        float *muestras;
        int cantidadMuestras;
    public:
        Estudio();
        ~Estudio();
        Estudio(float *_muestras, int _cantidadMuestras);
        static int objectCount;
        void setMuestras(float _muestras[]);
        float* getMuestras();
        int getCantidadMuestras();
        void setCantidadMuestras(int cant);
        float getMediana();
        float getModa();
        float getMedia();
        float getDesviacionEstandar();
        float getVarianza();
};

Estudio *_estudios;
#endif // ESTUDIO_H
