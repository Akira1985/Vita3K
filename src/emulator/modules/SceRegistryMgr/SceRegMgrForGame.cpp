// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "SceRegMgrForGame.h"

EXPORT(int, sceRegMgrSystemParamGetBin) {
    return unimplemented(export_name);
}

EXPORT(int, sceRegMgrSystemParamGetInt) {
    return unimplemented(export_name);
}

EXPORT(int, sceRegMgrSystemParamGetStr) {
    return unimplemented(export_name);
}

EXPORT(int, sceRegMgrSystemParamSetBin) {
    return unimplemented(export_name);
}

EXPORT(int, sceRegMgrSystemParamSetInt) {
    return unimplemented(export_name);
}

EXPORT(int, sceRegMgrSystemParamSetStr) {
    return unimplemented(export_name);
}

BRIDGE_IMPL(sceRegMgrSystemParamGetBin)
BRIDGE_IMPL(sceRegMgrSystemParamGetInt)
BRIDGE_IMPL(sceRegMgrSystemParamGetStr)
BRIDGE_IMPL(sceRegMgrSystemParamSetBin)
BRIDGE_IMPL(sceRegMgrSystemParamSetInt)
BRIDGE_IMPL(sceRegMgrSystemParamSetStr)
