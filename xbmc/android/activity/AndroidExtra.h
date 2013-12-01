#pragma once
/*
 *      Copyright (C) 2013 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */
 
 /*** Extra's not found in the Android NDK ***/
 
// missing in early NDKs, is present in r9b+
extern float AMotionEvent_getAxisValue(const AInputEvent* motion_event, int32_t axis, size_t pointer_index);
extern typeof(AMotionEvent_getAxisValue) *p_AMotionEvent_getAxisValue;
#define AMotionEvent_getAxisValue (*p_AMotionEvent_getAxisValue)

 //Additional defines from android.view.KeyEvent (http://developer.android.com/reference/android/view/KeyEvent.html)
#define AKEYCODE_ESCAPE 111
#define AKEYCODE_FORWARD_DEL 112
#define AKEYCODE_CTRL_LEFT 113
#define AKEYCODE_CTRL_RIGHT 114
#define AKEYCODE_CAPS_LOCK 115
#define AKEYCODE_SCROLL_LOCK 116
#define AKEYCODE_INSERT 124
#define AKEYCODE_FORWARD 125
#define AKEYCODE_MEDIA_PLAY 126
#define AKEYCODE_MEDIA_EJECT 129

//Additional defines from android.view.InputDevice (http://developer.android.com/reference/android/view/InputDevice.html)
#define AMOTION_EVENT_ACTION_SCROLL 0x08
#define AINPUT_SOURCE_GAMEPAD 0x00000400
#define AINPUT_SOURCE_JOYSTICK 0x01000010

// Joystick Axes (http://developer.android.com/reference/android/view/MotionEvent.html)
#define AMOTION_EVENT_AXIS_X 0
#define AMOTION_EVENT_AXIS_Y 1
#define AMOTION_EVENT_AXIS_LTRIGGER 17
#define AMOTION_EVENT_AXIS_RTRIGGER 18
#define AMOTION_EVENT_AXIS_Z 11  //2nd stick X
#define AMOTION_EVENT_AXIS_RZ 14  //2nd stick Y

// mouse vertical wheel
#define AMOTION_EVENT_AXIS_VSCROLL 0x09
