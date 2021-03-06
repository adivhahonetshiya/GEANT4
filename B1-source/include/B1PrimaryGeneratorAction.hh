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
// $Id: B3PrimaryGeneratorAction.hh 89901 2015-05-04 09:28:53Z ihrivnac $
//
/// \file B3PrimaryGeneratorAction.hh
/// \brief Definition of the B3PrimaryGeneratorAction class

#ifndef B1PrimaryGeneratorAction_h
#define B1PrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "globals.hh"
//#include "GeneralParticleSource.hh"  //added

class G4GeneralParticleSource; //changed;
class G4Event;

/// The primary generator action class with particle gum.
///
/// It defines an ion (F18), at rest, randomly distribued within a zone 
/// in a patient defined in GeneratePrimaries(). Ion F18 can be changed 
/// with the G4ParticleGun commands (see run2.mac).

class B1PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
  public:
    B1PrimaryGeneratorAction();    
    virtual ~B1PrimaryGeneratorAction();

    virtual void GeneratePrimaries(G4Event* anEvent);         

   // const G4ParticleGun* GetParticleGun() const { return fParticleGun; }
   const G4GeneralParticleSource* GetParticleGun() const { return fParticleGun; }
  
  private:
 //   G4ParticleGun*  fParticleGun;
    G4GeneralParticleSource*  fParticleGun;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
