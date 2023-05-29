#pragma once

#include <string>

class Task {
private:
    std::string _title;
    std::string _description;
	bool _isComplete;
public:
	Task() {}

	Task(std::string title, std::string description)
		: _title{title}, _description{description} {}

	std::string Title() const;
	Task& Title(std::string title);
	std::string Description() const;
	Task& Description(std::string description);
	bool IsComplete() const;
	void Complete();
	/*
	 * Printable details of the task in a
	 * formatted string.
	 */
	std::string Details() const;
};
