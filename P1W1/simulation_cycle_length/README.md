https://drive.google.com/file/d/1-hBL7G3fWFXdbiwzsC9N86IL0lDQ9Y_J/view?usp=sharing

hint:
* 每次乘10取餘數
* 法ㄧ：每次除完就把餘數存到一個陣列，在下一次取的時候就檢查一次這個餘數在前面有沒有出現過，如果有就已經找到循環節，如果沒有就將它存到該陣列
* 法二：存到陣列時要標明這個餘數是在第幾次出現，這樣可以避免下次還得檢查，可以省不少時間
* 陣列開多大？大小大概是從0~除數-1
