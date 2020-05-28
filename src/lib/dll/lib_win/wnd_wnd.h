#pragma once

#include "..\common.h"
#include "wnd_common.h"

EXPORT_CPP void _init(void* heap, S64* heap_cnt, S64 app_code, const U8* use_res_flags);
EXPORT_CPP void _fin();
EXPORT_CPP void _menuDtor(SClass* me_);
EXPORT_CPP void _menuAdd(SClass* me_, S64 id, const U8* text);
EXPORT_CPP void _menuAddLine(SClass* me_);
EXPORT_CPP void _menuAddPopup(SClass* me_, const U8* text, const U8* popup);
EXPORT_CPP void _menuIns(SClass* me_, S64 targetId, S64 id, const U8* text);
EXPORT_CPP void _menuInsPopup(SClass* me_, const U8* target, const U8* text, const U8* popup);
EXPORT_CPP void _menuDel(SClass* me_, S64 id);
EXPORT_CPP void _menuDelPopup(SClass* me_, const U8* popup);
EXPORT_CPP Bool _tabOrderChk(SClass* me_, S64 key, S64 shiftCtrl);
EXPORT_CPP void _wndAcceptDraggedFiles(SClass* me_, Bool is_accepted);
EXPORT_CPP void _wndActivate(SClass* me_);
EXPORT_CPP Bool _wndActivated(SClass* me_);
EXPORT_CPP void _wndClose(SClass* me_);
EXPORT_CPP void _wndExit(SClass* me_);
EXPORT_CPP Bool _wndFocusedWnd(SClass* me_);
EXPORT_CPP S64 _wndGetAlpha(SClass* me_);
EXPORT_CPP const U8* _wndGetText(SClass* me_);
EXPORT_CPP void _wndMinMax(SClass* me_, S64 minWidth, S64 minHeight, S64 maxWidth, S64 maxHeight);
EXPORT_CPP void _wndSetModalLock(SClass* me_);
EXPORT_CPP void _wndSetAlpha(SClass* me_, S64 alpha);
EXPORT_CPP void _wndSetMenu(SClass* me_, SClass* menu);
EXPORT_CPP void _wndSetText(SClass* me_, const U8* text);
EXPORT_CPP void _wndUpdateMenu(SClass* me_);
EXPORT_CPP void _wndBaseDtor(SClass* me_);
EXPORT_CPP void _wndBaseClientToScreen(SClass* me_, S64* screenX, S64* screenY, S64 clientX, S64 clientY);
EXPORT_CPP void _wndBaseFocus(SClass* me_);
EXPORT_CPP Bool _wndBaseFocused(SClass* me_);
EXPORT_CPP Bool _wndBaseGetEnabled(SClass* me_);
EXPORT_CPP void _wndBaseGetPos(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP void _wndBaseGetPosScreen(SClass* me_, S64* x, S64* y, S64* width, S64* height);
EXPORT_CPP Bool _wndBaseGetVisible(SClass* me_);
EXPORT_CPP void _wndBaseScreenToClient(SClass* me_, S64* clientX, S64* clientY, S64 screenX, S64 screenY);
EXPORT_CPP void _wndBaseSetEnabled(SClass* me_, Bool is_enabled);
EXPORT_CPP void _wndBaseSetPos(SClass* me_, S64 x, S64 y, S64 width, S64 height);
EXPORT_CPP void _wndBaseSetRedraw(SClass* me_, Bool is_enabled);
EXPORT_CPP void _wndBaseSetVisible(SClass* me_, Bool is_visible);
EXPORT_CPP Bool _act();
EXPORT_CPP S64 _colorDialog(SClass* parent, S64 default_color);
EXPORT_CPP void _fileDialogDir(const U8* defaultDir);
EXPORT_CPP void _getCaretPos(S64* x, S64* y);
EXPORT_CPP void* _getClipboardStr();
EXPORT_CPP void* _getOnKeyPress();
EXPORT_CPP Bool _key(S64 key);
EXPORT_CPP SClass* _makeMenu(SClass* me_);
EXPORT_CPP SClass* _makePopup(SClass* me_);
EXPORT_CPP SClass* _makeTabOrder(SClass* me_, U8* ctrls);
EXPORT_CPP SClass* _makeWnd(SClass* me_, SClass* parent, S64 style, S64 width, S64 height, const U8* text);
EXPORT_CPP S64 _msgBox(SClass* parent, const U8* text, const U8* title, S64 icon, S64 btn);
EXPORT_CPP void* _openFileDialog(SClass* parent, const U8* filter, S64 defaultFilter);
EXPORT_CPP void* _saveFileDialog(SClass* parent, const U8* filter, S64 defaultFilter, const U8* defaultExt);
EXPORT_CPP void _screenSize(S64* width, S64* height);
EXPORT_CPP void _setClipboardStr(const U8* str);
EXPORT_CPP void _setOnKeyPress(void* onKeyPressFunc);
