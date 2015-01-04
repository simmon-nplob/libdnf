/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015 Colin Walters <walters@verbum.org>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */


#if !defined (__LIBHIF_H) && !defined (HIF_COMPILATION)
#error "Only <libhif.h> can be included directly."
#endif

#ifndef __HIF_TYPES_H
#define __HIF_TYPES_H

#include <gio/gio.h>

typedef struct _HifContext		HifContext;
typedef struct _HifDb                   HifDb;
typedef struct _HifTransaction		HifTransaction;
typedef struct _HifRepos		HifRepos;
typedef struct _HifSource		HifSource;
typedef struct _HifState		HifState;

#define HIF_ERROR			(hif_error_quark ())
GQuark		 hif_error_quark	(void);

#endif

