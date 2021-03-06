//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: B3PrimaryGeneratorAction.cc 73744 2013-09-09 20:25:07Z asaim $
//
/// \file B3PrimaryGeneratorAction.cc
/// \brief Implementation of the B3PrimaryGeneratorAction class

#include "B1PrimaryGeneratorAction.hh"

#include "G4RunManager.hh"
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4IonTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4ChargedGeantino.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"
#include "G4GeneralParticleSource.hh"
#include <cmath> 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

//G4double Xo = 5.*MeV;
//G4double  FWHM = 0.5*MeV;
//G4double X = 15.*MeV;
//G4double exFWHM =pow(;

B1PrimaryGeneratorAction::B1PrimaryGeneratorAction()
//: G4VUserPrimaryGeneratorAction()   
{

  // to use GPS
 fParticleGun = new G4GeneralParticleSource();
 // to use particle gun
  //G4int nofParticles = 3;
 // fParticleGun = new G4ParticleGun(nofParticles);
 
  // default particle kinematic
  //
  //auto particleDefinition
  //  = G4ParticleTable::GetParticleTable()->FindParticle("gamma"); //for gamma
   // = G4ParticleTable::GetParticleTable()->FindParticle("e-"); //for electron
   
  
 // fParticleGun->SetParticleDefinition(particleDefinition);
 // fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0.,0.,1.));
 // fParticleGun->SetParticleEnergy(2.615 *MeV);
 

  //fParticleGun = new G4GeneralParticleSource();
 // fParticleGun = new G4ParticleGun();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B1PrimaryGeneratorAction::~B1PrimaryGeneratorAction()
{
  delete fParticleGun;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B1PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
  //create vertex
  //
  fParticleGun->GeneratePrimaryVertex(anEvent);
}


  //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

