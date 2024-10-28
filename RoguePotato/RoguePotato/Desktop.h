#pragma once
#define DESKTOP_ALL (DESKTOP_CREATEMENU      | DESKTOP_CREATEWINDOW  | \
DESKTOP_ENUMERATE | DESKTOP_HOOKCONTROL | \
DESKTOP_JOURNALPLAYBACK | DESKTOP_JOURNALRECORD | \
DESKTOP_READOBJECTS | DESKTOP_SWITCHDESKTOP |  \
DESKTOP_WRITEOBJECTS | DELETE | \
READ_CONTROL | WRITE_DAC |\
WRITE_OWNER)
#define WINSTA_ALL (WINSTA_ACCESSCLIPBOARD  | WINSTA_ACCESSGLOBALATOMS | \
WINSTA_CREATEDESKTOP | WINSTA_ENUMDESKTOPS | \
WINSTA_ENUMERATE | WINSTA_EXITWINDOWS | \
WINSTA_READATTRIBUTES | WINSTA_READSCREEN | \
WINSTA_WRITEATTRIBUTES | DELETE |\
READ_CONTROL | WRITE_DAC | \
WRITE_OWNER)
#define GENERIC_ACCESS (GENERIC_READ    | GENERIC_WRITE |GENERIC_EXECUTE | GENERIC_ALL)
