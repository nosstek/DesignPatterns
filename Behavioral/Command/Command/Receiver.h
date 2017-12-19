#ifndef __RECEIVER_H__
#define __RECEIVER_H__

class Receiver
{
public:
	Receiver(const std::string &_id);

	void TurnOn();
	void TurnOff();
	
	std::string GetId() const;

private:
	const std::string m_id;
};

#endif