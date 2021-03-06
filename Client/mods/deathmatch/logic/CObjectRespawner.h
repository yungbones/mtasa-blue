/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CObjectRespawner.h
 *  PURPOSE:     Header for object respawner class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

class CObjectRespawner
{
public:
    CObjectRespawner(void);
    ~CObjectRespawner(void) { DoRespawnAll(); };

    void Respawn(CClientObject* pObject);
    void DoRespawnAll(void);

    bool IsBeingRespawned(CClientObject* pObject);
    void Unreference(CClientObject* pObject);

private:
    std::vector<CClientObject*> m_List;
};
