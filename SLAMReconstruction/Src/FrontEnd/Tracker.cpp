#include <Utils/Util>
#include "Tracker.h"
#include "OrbGpuTracker.h"
#include "OrbTracker.h"
#include "SurfGpuTracker.h"
#include "SurfTracker.h"

namespace gf {
    Tracker *Tracker::tracker= nullptr;
    SharedRef<Tracker> Tracker::createTracker(const Tracker::TrackerType &trackerType) {
        if (tracker && tracker->mType == trackerType) {
            GF_INFO("Already a tracker matched for your type...");
            SharedRef <Tracker> ret_instance = nullptr;
            ret_instance.reset(tracker);
            return ret_instance;
        } else {
            if (tracker) {
                delete tracker;
                tracker = nullptr;
            }
            switch (trackerType) {
                case TrackerType::Orb: {
                    tracker = new OrbTracker();
                    break;
                }
                case TrackerType::OrbGpu: {
                    tracker = new OrbGpuTracker();
                    break;
                }
                case TrackerType::Surf: {
                    tracker = new SurfTracker();
                    break;
                }
                case TrackerType::SurfGpu: {
                    tracker = new SurfGpuTracker();
                    break;
                }
                case TrackerType::Default: {
                    tracker = new OrbTracker();
                    break;
                }
                default: {
                    tracker = new OrbTracker();
                    break;
                }
            }
            SharedRef<Tracker> ret_instance=nullptr;
            ret_instance.reset(tracker);
            return ret_instance;
        }
    }
}




