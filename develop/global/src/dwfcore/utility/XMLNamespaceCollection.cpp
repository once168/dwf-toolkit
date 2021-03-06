//
//  Copyright (c) 2004-2006 by Autodesk, Inc.  All rights reserved.
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted,
// provided that the above copyright notice appears in all copies and
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM 'AS IS' AND WITH ALL FAULTS.
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC.
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.
//
//  $Header: //DWF/Development/Components/Internal/DWF Core/v1.7/develop/global/src/dwfcore/utility/XMLNamespaceCollection.cpp#1 $
//  $DateTime: 2011/02/14 01:23:46 $
//  $Author: caos $
//  $Change: 197965 $
//  $Revision: #1 $
//
#include "XMLNamespaceCollection.h"

namespace DWFCore
{


_DWFCORE_API
DWFXMLNamespaceCollection::DWFXMLNamespaceCollection() throw()
{
}


_DWFCORE_API
DWFXMLNamespaceCollection::~DWFXMLNamespaceCollection() throw()
{
}


_DWFCORE_API
void 
DWFXMLNamespaceCollection::add( const DWFCore::DWFString& zUri )
    throw( DWFCore::DWFException )
{
    (void)zUri;
}


_DWFCORE_API
void 
DWFXMLNamespaceCollection::add( const DWFCore::DWFString& zPfx,
                                const DWFCore::DWFString& zUri)
    throw( DWFCore::DWFException)
{
    (void)zPfx;
    (void)zUri;
}


_DWFCORE_API
bool 
DWFXMLNamespaceCollection::has( const DWFCore::DWFString& zUri ) const
    throw()
{
    (void)zUri;
    return false;
}


_DWFCORE_API
bool DWFXMLNamespaceCollection::hasByPrefix( const DWFCore::DWFStringException& zPfx ) const
    throw()
{
    (void)zPfx;
    return false;
}


}
