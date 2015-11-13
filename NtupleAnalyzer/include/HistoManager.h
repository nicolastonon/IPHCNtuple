#ifndef HistoManager_H
#define HistoManager_H

#include <TString.h>
#include <TH1F.h>
#include <TH2F.h>

#include <map>


class HistoManager
{


 public:
   
   HistoManager();
   virtual ~HistoManager();
   
   void addHisto(TString var, TString selstep, TString channel, TString sample, int nbins, float min, float max);
   void addHisto2D( TString var, TString selstep, TString channel, TString sample, int nbins1, float min1, float max1, int nbins2, float min2, float max2);
   
   void fillHisto(TString var, TString selstep, TString channel, TString sample, float val, float weight);
   void fillHisto2D(TString var, TString selstep, TString channel, TString sample,float val1, float val2, float weight);
  
   void writeHisto();


   int numb_histo1D;
   int numb_histo2D;
   
   std::vector<TH1F*> getHisto1D_list(){return histo1D_list;};
   std::vector<TH2F*> getHisto2D_list(){return histo2D_list;};
   
   
 private:
 	


  std::vector<TH2F*> histo2D_list;
  std::map<std::string, int> histo2D_map;
  
  std::vector<TH1F*> histo1D_list;
  std::map<std::string, int> histo1D_map;
 


};


#endif
