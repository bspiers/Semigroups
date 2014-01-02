############################################################################# 
## 
#W  examples.gd
#Y  Copyright (C) 2013                                    James D. Mitchell
## 
##  Licensing information can be found in the README file of this package. 
## 
############################################################################# 
##

DeclareOperation("JonesMonoid", [IsPosInt]);
DeclareOperation("SingularJonesMonoid", [IsPosInt]);
DeclareSynonym("TemperleyLiebMonoid", JonesMonoid);

DeclareOperation("BrauerMonoid", [IsPosInt]);
DeclareOperation("SingularBrauerMonoid", [IsPosInt]);
DeclareOperation("FactorisableDualSymmetricInverseSemigroup", [IsPosInt]);
DeclareOperation("SingularFactorisableDualSymmetricInverseSemigroup", [IsPosInt]);
DeclareOperation("DualSymmetricInverseSemigroup", [IsPosInt]);
DeclareSynonym("DualSymmetricInverseMonoid", DualSymmetricInverseSemigroup);
DeclareOperation("SingularDualSymmetricInverseSemigroup", [IsPosInt]);

DeclareOperation("FullMatrixSemigroup", [IsPosInt, IsPosInt]);
DeclareOperation("GeneralLinearSemigroup", [IsPosInt, IsPosInt]);
DeclareProperty("IsFullMatrixSemigroup", IsSemigroup);
DeclareSynonymAttr("IsGeneralLinearSemigroup", IsFullMatrixSemigroup);
DeclareOperation("MunnSemigroup", [IsSemigroup]);
DeclareOperation("OrderEndomorphisms", [IsPosInt]);
DeclareOperation("PartialTransformationSemigroup", [IsPosInt]);
DeclareOperation("PartitionMonoid", [IsPosInt]);
DeclareOperation("POI", [IsPosInt]);
DeclareOperation("POPI", [IsPosInt]);
DeclareOperation("RegularBinaryRelationSemigroup", [IsPosInt]);
DeclareOperation("SingularTransformationSemigroup", [IsPosInt]);
DeclareSynonym("SingularTransformationMonoid",
SingularTransformationSemigroup);

#not implemented or documented
DeclareOperation("PowerSemigroup", [IsGroup]);
DeclareOperation("FullBinaryRelationSemigroup", [IsPosInt]);
DeclareOperation("MonoidOfMultiplicationByN", [IsPosInt]);