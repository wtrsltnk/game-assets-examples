#ifndef HL1BSPVIEWER_H
#define HL1BSPVIEWER_H

#include "../common/camera.h"
#include "../common/sdl-program.h"
#include "viewerhud.h"
#include <glm/glm.hpp>
#include <valve/hltypes.h>
#define SDL_MAIN_HANDLED
#include <SDL.h>

class AssetViewer : public Application
{
public:
    AssetViewer();
    virtual ~AssetViewer();

public:
    virtual const char *GetWindowTitle() { return "asset-viewer"; }
    virtual void GetContextAttributes(int &major, int &minor, bool &core)
    {
        major = 3;
        minor = 1;
        core = true;
    }
    virtual int GetWindowFlags() { return SDL_WINDOW_RESIZABLE; }

    virtual bool InitializeApplication(System *sys);
    virtual bool InitializeGraphics();
    virtual void GameLoop();
    virtual bool IsRunning();
    virtual void Resize(int w, int h);
    virtual void MouseMove(int x, int y);
    virtual void MouseButtonDown(int button, int x, int y);
    virtual void MouseButtonUp(int button, int x, int y);
    virtual void MouseWheel(int x, int y);
    virtual void KeyAction(int key, int action);
    virtual void Destroy();

private:
    System *_sys = nullptr;
    valve::Asset *_asset = nullptr;
    valve::AssetInstance *_instance = nullptr;
    glm::mat4 _proj;
    int _lastX = 0, _lastY = 0;
    bool _pan = false;
    Camera _cam;
    ViewerHud _hud;
};

#endif // HL1BSPVIEWER_H
