/*
 * Copyright (c) 1998-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */


//�����������������������������������������������������������������������������
//	Includes
//�����������������������������������������������������������������������������

// SCSI Architecture Model Family includes
#include "IOSCSIPeripheralDeviceType00.h"


//�����������������������������������������������������������������������������
//	Macros
//�����������������������������������������������������������������������������

#define DEBUG 									0
#define DEBUG_ASSERT_COMPONENT_NAME_STRING		"PDT 00"

#if DEBUG
#define SCSI_PDT_00_DEBUGGING_LEVEL				0
#endif


#include "IOSCSIArchitectureModelFamilyDebugging.h"


#if ( SCSI_PDT_00_DEBUGGING_LEVEL >= 1 )
#define PANIC_NOW(x)		IOPanic x
#else
#define PANIC_NOW(x)
#endif

#if ( SCSI_PDT_00_DEBUGGING_LEVEL >= 2 )
#define ERROR_LOG(x)		IOLog x
#else
#define ERROR_LOG(x)
#endif

#if ( SCSI_PDT_00_DEBUGGING_LEVEL >= 3 )
#define STATUS_LOG(x)		IOLog x
#else
#define STATUS_LOG(x)
#endif


#define super IOSCSIBlockCommandsDevice
OSDefineMetaClassAndStructors ( IOSCSIPeripheralDeviceType00, IOSCSIBlockCommandsDevice )


#if 0
#pragma mark -
#pragma mark � Public Methods - Methods used by this class and subclasses
#pragma mark -
#endif


//�����������������������������������������������������������������������������
//	� init - Called at initialization time							   [PUBLIC]
//�����������������������������������������������������������������������������

bool
IOSCSIPeripheralDeviceType00::init ( OSDictionary * propTable )
{
	
	bool	result = false;
	
	require ( super::init ( propTable ), ErrorExit );
	result = true;
	
	
ErrorExit:
	
	
	return result;
	
}


//�����������������������������������������������������������������������������
//	� start - Called at services start time	(after successful matching)
//																	   [PUBLIC]
//�����������������������������������������������������������������������������

bool
IOSCSIPeripheralDeviceType00::start ( IOService * provider )
{
	
	bool	result = false;
	
	require ( super::start ( provider ), ErrorExit );
	result = true;
	
	
ErrorExit:
	
		
	return result;
	
}


//�����������������������������������������������������������������������������
//	� stop - Called at stop start time								   [PUBLIC]
//�����������������������������������������������������������������������������

void
IOSCSIPeripheralDeviceType00::stop ( IOService * provider )
{
	
	super::stop ( provider );
	
}


#if 0
#pragma mark -
#pragma mark � VTable Padding
#pragma mark -
#endif


// Space reserved for future expansion.
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 1 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 2 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 3 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 4 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 5 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 6 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 7 );
OSMetaClassDefineReservedUnused ( IOSCSIPeripheralDeviceType00, 8 );