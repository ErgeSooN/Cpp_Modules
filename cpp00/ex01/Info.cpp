#include "Info.hpp"

void Info::setSecret(const std::string str) { secret_ = str; }
void Info::setFirstName(const std::string str) { firstName_ = str; }
void Info::setLastName(const std::string str) { lastName_ = str; }
void Info::setNickname(const std::string str) { nickname_ = str; }
void Info::setPhoneNumber(const std::string str) { phoneNumber_ = str; }

std::string Info::getSecret(void) const { return (secret_); }
std::string Info::getFirstName(void) const { return (firstName_); }
std::string Info::getLastName(void) const { return (lastName_); }
std::string Info::getNickname(void) const { return (nickname_); }
std::string Info::getPhoneNumber(void) const { return (phoneNumber_); }