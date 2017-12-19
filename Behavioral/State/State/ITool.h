#ifndef __ITOOL_H__
#define __ITOOL_H__

class IState;

class ITool
{
public:
	ITool(IState* _state, const std::string &_id) : m_state(_state), m_id(_id)
	{
		if (m_state)
			printf("Created %s with state %s\n", GetId().c_str(), m_state->GetId().c_str());
	};

	virtual ~ITool() {};

	virtual bool UseTool()
	{
		printf("Trying to use tool: %s\n", GetId().c_str());
		return true;
	};

	IState* GetState() const { return m_state; };
	void SetState(IState* _state)
	{
		if (_state)
		{
			printf("Changed %s state to %s\n", GetId().c_str(), _state->GetId().c_str());
			m_state = _state;
		}
	};
	std::string GetId() const { return m_id; };
private:
	IState* m_state;
	const std::string m_id;
};

#endif