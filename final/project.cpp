#include "deps.hpp"
#include "snapshot.hpp"
#include "project.hpp"

hku::Project::Project() {
    this->_progress = 0.0f;
    this->snapshots = std::vector<std::unique_ptr<hku::Snapshot>>();
}

void hku::Project::addSnapshot(const std::string& description) {
    this->snapshots.push_back(std::make_unique<hku::Snapshot>());
    this->snapshots.back()->description = description;
    return;
}

float hku::Project::getProgress() {
    return this->_progress;
}

void hku::Project::setProgress(const float value) {
    this->_progress = value;
    return;
}