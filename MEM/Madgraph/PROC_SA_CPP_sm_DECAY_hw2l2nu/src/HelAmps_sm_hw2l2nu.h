//==========================================================================
// This file has been automatically generated for C++ Standalone
// MadGraph5_aMC@NLO v. 2.2.2, 2014-11-06
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
//==========================================================================

#ifndef HelAmps_sm_hw2l2nu_H
#define HelAmps_sm_hw2l2nu_H

#include <cmath> 
#include <complex> 

using namespace std; 

namespace MG5_sm_hw2l2nu 
{
void oxxxxx(double p[4], double fmass, int nhel, int nsf, std::complex<double>
    fo[6]);

double Sgn(double e, double f); 

void vxxxxx(double p[4], double vmass, int nhel, int nsv, std::complex<double>
    v[6]);

void sxxxxx(double p[4], int nss, std::complex<double> sc[3]); 

void ixxxxx(double p[4], double fmass, int nhel, int nsf, std::complex<double>
    fi[6]);

void txxxxx(double p[4], double tmass, int nhel, int nst, std::complex<double>
    fi[18]);

void FFV2_3(complex<double> F1[], complex<double> F2[], complex<double> COUP,
    double M3, double W3, complex<double> V3[]);

void VVS1_0(complex<double> V1[], complex<double> V2[], complex<double> S3[],
    complex<double> COUP, complex<double> & vertex);

}  // end namespace MG5_sm

#endif  // HelAmps_sm_H
