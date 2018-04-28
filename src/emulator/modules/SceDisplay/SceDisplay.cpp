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

#include "SceDisplay.h"

#include <host/functions.h>

#include <psp2/display.h>

EXPORT(int, _sceDisplayGetFrameBuf) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplayGetFrameBufInternal) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplayGetMaximumFrameBufResolution) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplayGetResolutionInfoInternal) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplaySetFrameBuf) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplaySetFrameBufForCompat) {
    return unimplemented(export_name);
}

EXPORT(int, _sceDisplaySetFrameBufInternal) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayGetPrimaryHead) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayGetRefreshRate, float *pFps) {
    *pFps = 59.94005f;
    return 0;
}

EXPORT(int, sceDisplayGetVcount) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayGetVcountInternal) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayRegisterVblankStartCallback) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayUnregisterVblankStartCallback) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitSetFrameBuf) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitSetFrameBufCB) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitSetFrameBufMulti) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitSetFrameBufMultiCB) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitVblankStart) {
    {
        std::unique_lock<std::mutex> lock(host.display.mutex);
        host.display.condvar.wait(lock);
        if (host.display.abort.load()) {
#ifndef WIN32
            lock.release();
#endif
            return SCE_DISPLAY_ERROR_NO_PIXEL_DATA;
        }
    }
    return SCE_DISPLAY_ERROR_OK;
}

EXPORT(int, sceDisplayWaitVblankStartCB) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitVblankStartMulti) {
    return unimplemented(export_name);
}

EXPORT(int, sceDisplayWaitVblankStartMultiCB) {
    return unimplemented(export_name);
}

BRIDGE_IMPL(_sceDisplayGetFrameBuf)
BRIDGE_IMPL(_sceDisplayGetFrameBufInternal)
BRIDGE_IMPL(_sceDisplayGetMaximumFrameBufResolution)
BRIDGE_IMPL(_sceDisplayGetResolutionInfoInternal)
BRIDGE_IMPL(_sceDisplaySetFrameBuf)
BRIDGE_IMPL(_sceDisplaySetFrameBufForCompat)
BRIDGE_IMPL(_sceDisplaySetFrameBufInternal)
BRIDGE_IMPL(sceDisplayGetPrimaryHead)
BRIDGE_IMPL(sceDisplayGetRefreshRate)
BRIDGE_IMPL(sceDisplayGetVcount)
BRIDGE_IMPL(sceDisplayGetVcountInternal)
BRIDGE_IMPL(sceDisplayRegisterVblankStartCallback)
BRIDGE_IMPL(sceDisplayUnregisterVblankStartCallback)
BRIDGE_IMPL(sceDisplayWaitSetFrameBuf)
BRIDGE_IMPL(sceDisplayWaitSetFrameBufCB)
BRIDGE_IMPL(sceDisplayWaitSetFrameBufMulti)
BRIDGE_IMPL(sceDisplayWaitSetFrameBufMultiCB)
BRIDGE_IMPL(sceDisplayWaitVblankStart)
BRIDGE_IMPL(sceDisplayWaitVblankStartCB)
BRIDGE_IMPL(sceDisplayWaitVblankStartMulti)
BRIDGE_IMPL(sceDisplayWaitVblankStartMultiCB)
