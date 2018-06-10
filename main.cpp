#include <iostream>
#include "Neuron.h"

int main()
{
    double inputs[] = {2,4,6,7,8};
    double weights[] = {1,2,3,4,5};
    Network* network = new Network();
    network->setInputs(inputs);
    network->getInputs();

    delete network;

    return 0;
}
