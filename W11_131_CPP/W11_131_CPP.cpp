#include <iostream>
using namespace std;

struct TV {
	bool powerOn;
	int channel;
	int volume;
	void on() {
		powerOn = true;
	}
	void off() {
		powerOn = false;
	}
	void setchannel(int ch) {
		channel = ch;
	}
	int getchannel() {
		return channel;
	}
	void setvolume(int vol) {
		volume = vol;
	}
	int getvolume() {
		return volume;
	}
};

int main()
{
	TV myTv; //struct 생략 가능
	myTv.on();
	myTv.setchannel(10);
	myTv.setvolume(50);

	cout << "현재 채널은 " << myTv.getchannel() << endl;
	cout << "현재 볼륨은 " << myTv.getvolume() << endl;
}

