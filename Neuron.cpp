#include "Neuron.h"
#include <iostream>
#include <math.h>
#define COUNTOF inline constexpr size_t
template< typename T > COUNTOF Countof( const T (&) ) { return 0; }
template< typename T, size_t S > COUNTOF Countof( const T (&)[S] ) { return S; }

Network::Network()
{
    //ctor
}

Network::Network(_Neuron* n)
{
    neuron = n;
}

Network::~Network()
{
    std::cout<<"\nNeuron::~Neuron"<<std::endl;
}

void Network::setInputs(double inputs[])
{
    unsigned int i = 0;
    while(i < Countof(inputs))
    {
        neuron->input[i] = inputs[i];
        i++;
    }
}
void Network::getInputs()
{
    std::cout<<"<";
    for(int i = 0; i < Countof(neuron->input); ++i)
    {
        std::cout<<neuron->input[i]<<",";
    } std::cout<<">";
}
void Network::setWeights(double weights[])
{
    unsigned int i = 0;
    while(i < sizeof(weights))
    {
        neuron->weight[i] = weights[i];
        i++;
    }
}
void Network::getWeights()
{
    std::cout<<"<";
    for(int i = 0; i < sizeof(neuron->input); ++i)
    {
        std::cout<<neuron->weight[i]<<",";
    } std::cout<<">";
}

inline constexpr double sigmoide(double x)
{
    double e = 2.718281828459045235360;
    return (1/(1+pow(e,4)));
}
