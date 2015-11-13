#ifndef TTbarHiggsMultileptonAnalysis_H
#define TTbarHiggsMultileptonAnalysis_H

#include <TString.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TTree.h>
#include <TFile.h>
#include "Muon.h"
#include "Electron.h"
#include "Jet.h"
#include "Event.h"
#include "Truth.h"
#include <TObject.h>
#include <TROOT.h>
#include <iostream>

#include "HistoManager.h"
#include "Lepton.h"

class TTbarHiggsMultileptonAnalysis
{
  
 public: 
   TTbarHiggsMultileptonAnalysis();
   TTbarHiggsMultileptonAnalysis(TString inputfilename, TTree *tree, TString theSampleName);
   
   ~TTbarHiggsMultileptonAnalysis();
    
   void createHistograms();
   void writeHistograms();
   
   void PrintEventList(std::vector<Lepton> leptons,std::vector<Jet> jets);
      
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   
   std::vector<Electron>             *vElectron             = new std::vector<Electron>();
   std::vector<Muon>                 *vMuon                 = new std::vector<Muon>();
   std::vector<Event>                *vEvent                = new std::vector<Event>();
   std::vector<Jet>                  *vJet                  = new std::vector<Jet>();
   std::vector<Truth>                *vTruth                = new std::vector<Truth>();
    
   virtual void     Init(TTree *tree);
   
   virtual void     Loop();
   
 private: 
   
   HistoManager * theHistoManager;
   
   TFile * outputfile;
   
   FILE *fevc;
   
   TString sampleName;    
};

#endif
