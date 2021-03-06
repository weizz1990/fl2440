/*
*********************************************************************************************************
*                                                uC/GUI
*                        Universal graphic software for embedded applications
*
*                       (c) Copyright 2002, Micrium Inc., Weston, FL
*                       (c) Copyright 2002, SEGGER Microcontroller Systeme GmbH
*
*              �C/GUI is protected by international copyright laws. Knowledge of the
*              source code may not be used to write a similar product. This file may
*              only be used in accordance with a license and should not be redistributed
*              in any way. We appreciate your understanding and fairness.
*
* File    : GUI_DrawBitmap.C
* Purpose : Implementation of GUI_DrawBitmap
*
*
* Version-Date---Author-Explanation
*
* 1.00.00 020517 RS     First release
*
*
* Known problems or limitations with current version
*
*    None.
*
*
* Open issues
*
*    None
*********************************************************************************************************
*/

#include "GUI_Protected.H"


void GUI_SetBkColorIndex(int Index)   {
  GUI_LOCK(); {
    LCD_SetBkColorIndex(Index);
  } GUI_UNLOCK();
}

void GUI_SetColorIndex(int Index)   {
  GUI_LOCK(); {
    LCD_SetColorIndex(Index);
  } GUI_UNLOCK();
}
