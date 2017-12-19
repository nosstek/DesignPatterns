#ifndef __CLIENT_H__
#define __CLIENT_H__

enum OperatingSystemT
{
	os_Unknown = 0,
	os_Win = 1,
	os_Unix
};

class Client
{
public:
	Client(OperatingSystemT _system_id) : m_system_id(_system_id) { printf("Creating Client with system %s\n", GetMySystem() == os_Win ? "Win" : "Unix"); };

	OperatingSystemT GetMySystem() const { return m_system_id; };
	void SetMySystem(OperatingSystemT _system_id)
	{
		m_system_id = _system_id;
		printf("Changed Client system to %s\n", GetMySystem() == os_Win ? "Win" : "Unix");
	};

	void RenderProgram();

private:
	OperatingSystemT m_system_id;
};

#endif