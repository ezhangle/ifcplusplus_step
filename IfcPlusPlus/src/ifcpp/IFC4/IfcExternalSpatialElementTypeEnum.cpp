/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPException.h"
#include "include/IfcExternalSpatialElementTypeEnum.h"

// TYPE IfcExternalSpatialElementTypeEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_WATER	,EXTERNAL_FIRE	,USERDEFINED	,NOTDEFINED);
IfcExternalSpatialElementTypeEnum::IfcExternalSpatialElementTypeEnum() {}
IfcExternalSpatialElementTypeEnum::~IfcExternalSpatialElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcExternalSpatialElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcExternalSpatialElementTypeEnum> copy_self( new IfcExternalSpatialElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcExternalSpatialElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEXTERNALSPATIALELEMENTTYPEENUM("; }
	if( m_enum == ENUM_EXTERNAL )
	{
		stream << ".EXTERNAL.";
	}
	else if( m_enum == ENUM_EXTERNAL_EARTH )
	{
		stream << ".EXTERNAL_EARTH.";
	}
	else if( m_enum == ENUM_EXTERNAL_WATER )
	{
		stream << ".EXTERNAL_WATER.";
	}
	else if( m_enum == ENUM_EXTERNAL_FIRE )
	{
		stream << ".EXTERNAL_FIRE.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcExternalSpatialElementTypeEnum> IfcExternalSpatialElementTypeEnum::createObjectFromSTEP( const std::wstring& arg )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	shared_ptr<IfcExternalSpatialElementTypeEnum> type_object( new IfcExternalSpatialElementTypeEnum() );
	if( boost::iequals( arg, L".EXTERNAL." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL;
	}
	else if( boost::iequals( arg, L".EXTERNAL_EARTH." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_EARTH;
	}
	else if( boost::iequals( arg, L".EXTERNAL_WATER." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_WATER;
	}
	else if( boost::iequals( arg, L".EXTERNAL_FIRE." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_FIRE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
