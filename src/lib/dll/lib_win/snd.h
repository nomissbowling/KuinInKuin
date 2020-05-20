#pragma once

#include "..\common.h"

EXPORT_CPP void _sndInit();
EXPORT_CPP void _sndFin();
EXPORT_CPP void _sndUpdate();
EXPORT_CPP void _sndDtor(SClass* me_);
EXPORT_CPP void _sndFreq(SClass* me_, double value);
EXPORT_CPP double _sndGetPos(SClass* me_);
EXPORT_CPP double _sndLen(SClass* me_);
EXPORT_CPP void _sndPan(SClass* me_, double value);
EXPORT_CPP void _sndPlay(SClass* me_);
EXPORT_CPP Bool _sndPlaying(SClass* me_);
EXPORT_CPP void _sndPlayLoop(SClass* me_, double loopPos);
EXPORT_CPP void _sndSetPos(SClass* me_, double value);
EXPORT_CPP void _sndStop(SClass* me_);
EXPORT_CPP void _sndVolume(SClass* me_, double value);
EXPORT_CPP double _getMainVolume();
EXPORT_CPP SClass* _makeSnd(SClass* me_, const U8* path, Bool streaming);
EXPORT_CPP void _setMainVolume(double value);
