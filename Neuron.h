#ifndef NEURON_H
#define NEURON_H
#include "_Neuron.h"

class Network
{
    public:
        Network();
        Network(_Neuron*);
        virtual ~Network();
        void setInputs(double[]);
        void getInputs();
        void setWeights(double[]);
        void getWeights();
    protected:

    private:
        double inputs[];
        double weights[];
        _Neuron* neuron = new _Neuron;
};

#endif // NEURON_H
