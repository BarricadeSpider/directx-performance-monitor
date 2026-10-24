// Main entry point for the performance monitor.
// Initializes DirectX monitoring hooks and manages the UI loop.
#include <iostream>
#include "DirectXMonitor.h"

int main() {
    std::cout << "[DXPM] Initializing Performance Monitor...\n";
    DirectXMonitor monitor;

    if (monitor.initialize()) {
        std::cout << "[DXPM] Successfully connected to target process.\n";
        // Main monitoring loop execution placeholder
        while (true) {
            monitor.updateMetrics();
            monitor.displayStatus();
            // Sleep for 16ms (approx 60 FPS)
            std::this_thread::sleep_for(std::chrono::milliseconds(16));
        }
    } else {
        std::cerr << "[DXPM] Failed to initialize monitoring hooks. Check target process.\n";
    }
    return 0;
}