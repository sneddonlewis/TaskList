#include "Task.h"

#include <string>

std::string Task::Title() const {
    return _title;
}

std::string Task::Description() const {
    return _description;
}

Task& Task::Title(std::string title) {
    _title = title;
    return *this;
}

Task& Task::Description(std::string description) {
    _description = description;
    return *this;
}

bool Task::IsComplete() const {
	return _isComplete;
}

void Task::Complete() {
	_isComplete = true;
}

std::string Task::Details() const {
	return "Task: "
		+ _title
		+ " : "
		+ (_isComplete ? "Finished" : "Outstanding")
		+"\nDescription: "
		+ _description;
}
