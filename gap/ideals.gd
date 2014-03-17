############################################################################# 
## 
#W  ideals.gd
#Y  Copyright (C) 2013-14                                 James D. Mitchell
## 
##  Licensing information can be found in the README file of this package. 
## 
############################################################################# 

DeclareSynonymAttr("GeneratorsOfSemigroupIdeal", GeneratorsOfMagmaIdeal);
DeclareGlobalFunction("SemigroupIdeal");

DeclareOperation("SemigroupIdealByGenerators", 
  [IsActingSemigroup, IsAssociativeElementCollection, IsRecord]);

