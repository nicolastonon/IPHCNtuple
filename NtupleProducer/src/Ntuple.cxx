#include "include/Ntuple.h"

Ntuple::Ntuple()
{
}

Ntuple::~Ntuple()
{   
    m_file->Write();
    m_file->Close();
}

void Ntuple::Init()
{
    m_file = new TFile("output.root","RECREATE");
    m_tree = new TTree("Nt"," Ntuple");
}

void Ntuple::setBranchAddress()
{
    m_tree->Branch("Event",    "std::vector<Event>",    (NtEvent),    32000, 1);
    m_tree->Branch("Electron", "std::vector<Electron>", (NtElectron), 32000, 1);
    m_tree->Branch("Muon",     "std::vector<Muon>",     (NtMuon),     32000, 1);
    m_tree->Branch("Tau",      "std::vector<Tau>",      (NtTau),      32000, 1);
    m_tree->Branch("Jet",      "std::vector<Jet>",      (NtJet),      32000, 1);
    m_tree->Branch("Truth",    "std::vector<Truth>",    (NtTruth),    32000, 1);
}

void Ntuple::createVar()
{
    NtEvent     = new std::vector<Event>;
    NtElectron  = new std::vector<Electron>;
    NtMuon      = new std::vector<Muon>;
    NtTau       = new std::vector<Tau>;
    NtJet       = new std::vector<Jet>;
    NtTruth     = new std::vector<Truth>;
}

void Ntuple::clearVar()
{
    NtEvent->clear();
    NtElectron->clear();
    NtMuon->clear();
    NtTau->clear();
    NtJet->clear();
    NtTruth->clear();
}

void Ntuple::fill()
{
    m_tree->Fill();
}
