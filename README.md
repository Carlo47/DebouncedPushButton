# DebouncedPushButton
Debounces a pushbutton and implements methods to add callbacks for the events click, longclick and doubleclick

The PushButton class implemented here solves the "debounce problem" and hides it from the user. 
The user only has to program his actions to be executed on a click, a longClick or on a double-click. 
He registers these callback functions in the button with addOnclickCB(), addOnLongClickCB() and 
addOnDoubleClickCB(). In his main loop() he then only calls button.loop() and the whole handling 
of the button actions is done.

The program shows how easy it is to use this `DebouncedButton`class.
