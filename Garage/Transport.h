#pragma once
#include<string>
#include<iostream>
enum prHeigh {NoProb = 0, Low = 1, Medium = 3, High =5 };
class Transport
{
public:
	Transport();
	Transport(std::string, std::string ,unsigned ,std::string ,prHeigh);
	int getProblem()const;
	virtual std::string getType()const=0;
	virtual void print();
	virtual ~Transport()=default;
	friend std::istream& operator>>(std::istream&, Transport&);
private:
	std::string mark;
	std::string model;
	unsigned year;
	std::string problem;
	prHeigh heigh;
};

Transport::Transport():
	mark("No mark"), model("No model"), year(0), problem("No problem"), heigh(NoProb)
{};

Transport::Transport(std::string mark, std::string model, unsigned year, std::string problem, prHeigh heigh):
	mark(mark), model(model),year(year), problem(problem),heigh(heigh)
{};
void Transport::print()
{
	std::cout << "Mark: " << mark << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Problem: " << problem << std::endl;
	std::cout << "Problem type: " << heigh << std::endl;
};
int Transport::getProblem()const
{
	return this->heigh;
};

std::istream& operator>>(std::istream& in, Transport& newcar)
{
	in >> newcar.mark;
	in >> newcar.model;
	in >> newcar.problem;
	std::string temp;
	in >> temp;
	if (temp == "Low") newcar.heigh=prHeigh::Low;
	if (temp == "Medium") newcar.heigh = prHeigh::Medium;
	if (temp == "High") newcar.heigh = prHeigh::High;
	if (temp == "No") newcar.heigh = prHeigh::NoProb;
	return in;
}