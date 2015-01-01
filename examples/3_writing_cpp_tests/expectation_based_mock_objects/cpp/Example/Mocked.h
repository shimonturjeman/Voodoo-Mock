#ifndef __MOCKED_H__
#define __MOCKED_H__

#include "Data.h"
#include <memory>

void clear( Data & data );
void setInterval( unsigned interval );
void logMessage( const char * message );
void giveData( struct Data & data );
void doMoveData( MoveableData data );
void doMoveData( MoveableCtorData data );
void setCallback( DoItInterface & interface );
void setCallback( DoItInterface * interface );
void returnValueByReferenceOutParamter( unsigned & out );
void returnValueByPointerOutParamter( unsigned * out );

#endif // __MOCKED_H__
// FILE_EXEMPT_FROM_CODE_COVERAGE