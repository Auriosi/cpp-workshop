#pragma once
#include "deps.hpp"
#include "snapshot.hpp"

namespace hku {
    class Project {
        public:
            Project();
            void addSnapshot(const std::string& description);
            float getProgress();
            void setProgress(const float value);
            const std::vector<std::unique_ptr<hku::Snapshot>>& getSnapshots() {
                return this->snapshots;
            }
        private:
            float _progress;
            std::vector<std::unique_ptr<hku::Snapshot>> snapshots;
    };
}