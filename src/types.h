/*
 * Semigroups GAP package
 *
 * This file contains types of semigroups for use in the Semigroups kernel
 * module.
 *
 */

#ifndef SEMIGROUPS_GAP_TYPES_H
#define SEMIGROUPS_GAP_TYPES_H 1

#include "src/compiled.h"          /* GAP headers                */

#include <assert.h>

/*******************************************************************************
 * GAP TNUM for wrapping C++ semigroup
*******************************************************************************/

#ifndef T_SEMI
#define T_SEMI T_SPARE2 //TODO use Register_TNUM when it's available
#endif

enum SemigroupsBagType {
  UF_DATA   = 0,
  SEMIGROUP = 1,
  CONVERTER = 2
};

template <typename Class>
inline Obj NewSemigroupsBag (Class* cpp_class, SemigroupsBagType type) {
  Obj o = NewBag(T_SEMI, 2 * sizeof(Obj));
  ADDR_OBJ(o)[0] = (Obj)type;
  ADDR_OBJ(o)[1] = reinterpret_cast<Obj>(cpp_class);
  return o;
}

// get C++ Class from GAP object

template <typename Class>
inline Class* CLASS_OBJ(Obj o) {
    return reinterpret_cast<Class*>(ADDR_OBJ(o)[1]);
}

#define IS_T_SEMI(o)        (TNUM_OBJ(o) == T_SEMI)
#define IS_CONVERTER_BAG(o) (IS_T_SEMI(o) && (Int)ADDR_OBJ(o)[0] == CONVERTER)
#define IS_SEMIGROUP_BAG(o) (IS_T_SEMI(o) && (Int)ADDR_OBJ(o)[0] == SEMIGROUP)
#define IS_UF_DATA_BAG(o)   (IS_T_SEMI(o) && (Int)ADDR_OBJ(o)[0] == UF_DATA)

/*******************************************************************************
 * Macros for checking types of objects
*******************************************************************************/

#define IS_BOOL_MAT(x)           (CALL_1ARGS(IsBooleanMat, x) == True)
#define IS_BIPART(x)             (CALL_1ARGS(IsBipartition, x) == True)
#define IS_MAT_OVER_SEMI_RING(x) (CALL_1ARGS(IsMatrixOverSemiring, x) == True)
#define IS_MAX_PLUS_MAT(x)       (CALL_1ARGS(IsMaxPlusMatrix, x) == True)
#define IS_MIN_PLUS_MAT(x)       (CALL_1ARGS(IsMinPlusMatrix, x) == True)
#define IS_TROP_MAT(x)           (CALL_1ARGS(IsTropicalMatrix, x) == True)
#define IS_TROP_MAX_PLUS_MAT(x)  (CALL_1ARGS(IsTropicalMaxPlusMatrix, x) == True)
#define IS_TROP_MIN_PLUS_MAT(x)  (CALL_1ARGS(IsTropicalMinPlusMatrix, x) == True)
#define IS_PROJ_MAX_PLUS_MAT(x)  (CALL_1ARGS(IsProjectiveMaxPlusMatrix, x) == True)
#define IS_NAT_MAT(x)            (CALL_1ARGS(IsNaturalMatrix, x) == True)
#define IS_MAT_OVER_PF(x)        (CALL_1ARGS(IsMatrixOverPrimeField, x) == True)
#define IS_PBR(x)                (CALL_1ARGS(IsPBR, x) == True)

/*******************************************************************************
 * Imported types from the library
*******************************************************************************/

extern Obj Objectify;
extern Obj infinity;
extern Obj Ninfinity;
extern Obj IsBipartition;
extern Obj BipartitionByIntRepNC;   
extern Obj IsBooleanMat;
extern Obj BooleanMatType;   
extern Obj IsMatrixOverSemiring;
extern Obj IsMaxPlusMatrix;
extern Obj MaxPlusMatrixType;   
extern Obj IsMinPlusMatrix;
extern Obj MinPlusMatrixType;   
extern Obj IsTropicalMatrix;
extern Obj IsTropicalMinPlusMatrix;
extern Obj TropicalMinPlusMatrixType;   
extern Obj IsTropicalMaxPlusMatrix;
extern Obj TropicalMaxPlusMatrixType;
extern Obj IsProjectiveMaxPlusMatrix;
extern Obj ProjectiveMaxPlusMatrixType;
extern Obj IsNaturalMatrix;
extern Obj NaturalMatrixType;
extern Obj IsMatrixOverPrimeField;
extern Obj AsMatrixOverPrimeFieldNC;
extern Obj IsPBR;
extern Obj PBRType;

#endif