/*
 * Ghost - A honeypot for USB malware
 * Copyright (C) 2011-2012  Sebastian Poeplau (sebastian.poeplau@gmail.com)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 * Additional permission under GNU GPL version 3 section 7
 *
 * If you modify this Program, or any covered work, by linking or combining
 * it with the Windows Driver Frameworks (or a modified version of that library),
 * containing parts covered by the terms of the Microsoft Software License Terms -
 * Microsoft Windows Driver Kit, the licensors of this Program grant you additional
 * permission to convey the resulting work.
 * 
 */


#ifndef FILE_IO_H
#define FILE_IO_H


#include <ntddk.h>
#include <wdf.h>


EVT_WDF_IO_QUEUE_IO_READ GhostFileIoRead;
EVT_WDF_IO_QUEUE_IO_WRITE GhostFileIoWrite;
NTSTATUS GhostFileIoMountImage(WDFDEVICE Device, PUNICODE_STRING ImageName, PLARGE_INTEGER ImageSize);
NTSTATUS GhostFileIoUmountImage(WDFDEVICE Device);


#endif
