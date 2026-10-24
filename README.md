# 🚀 DirectX Performance Monitor

[![Build Status](https://img.shields.io/github/workflow/status/BarricadeSpiderName/directx-performance-monitor/build.yml?label=Build)](https://tr.ee/KUmTIJ)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows-0078D4.svg)](https://www.github.com/BarricadeSpiderName/directx-performance-monitor#platform)
[![Version](https://img.shields.io/github/v/release/BarricadeSpiderName/directx-performance-monitor?style=flat&logo=github)](https://github.com/BarricadeSpiderName/directx-performance-monitor/releases)

> The DirectX Performance Monitor provides deep introspection into GPU utilization, frame timing, and rendering resource overhead for any D3D12 or D3D11 application running on Windows.

## ✨ Features

*   **Real-Time Metric Display:** Displays FPS, Frame Time (ms), GPU Utilization %, and CPU Load concurrently.
*   **Pipeline Stage Breakdown:** Detailed view of time spent in various DirectX pipeline stages (Vertex Shader, Rasterization, Pixel Shader, etc.).
*   **Resource Tracking:** Monitors VRAM usage and tracks the allocation/deallocation frequency of key resources.
*   **Customizable Thresholds:** Allows users to set alert thresholds for critical metrics via configuration files.
*   **API Agnostic Interface:** Supports seamless monitoring across both DirectX 12 and DirectX 11 implementations.
*   **Data Logging:** Enables saving performance snapshots to CSV format for later trend analysis.

## 📥 Installation

1.  **Download:** Obtain the latest stable build from the [Releases page](https://github.com/BarricadeSpiderName/directx-performance-monitor/releases). 
2.  **Extract:** Unzip the downloaded archive to your desired location.
3.  **Run:** Execute `Monitor.exe` (or `toolkit.exe`) directly from the extracted folder. The tool will automatically scan for active DirectX applications or prompt you to select a target process.

## ⚙️ Usage

The monitor operates by hooking into the rendering calls of target processes. You can customize its behavior using the configuration file:


{
  "logIntervalMs": 50,
  "alertThresholds": {
    "gpuUtilizationPct": 90.0,
    "frameTimeMs": 33.3}
}


To start logging data for a specific application, ensure the configuration file is present and then launch `Monitor.exe` while that application is running.

## ❓ FAQ

<details><summary>What DirectX versions does it support?</summary>
It natively supports monitoring metrics from both DirectX 12 (D3D12) and DirectX 11 (D3D11) applications, dynamically detecting the API being used.
</details>

<details><summary>Can I monitor a process that isn't running?</summary>
No. The tool requires the target process to be actively executing rendering commands for meaningful data collection. You can select it via the GUI or specify its PID in `config/default.json`.
</details>

<details><summary>How often does it sample metrics?</summary>
The default sampling interval is set to 50ms (configurable). This provides a balance between low overhead and high temporal resolution for performance analysis.
</details>

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. Feel free to fork, modify, and distribute!

[![Download](https://img.shields.io/badge/Download-Latest-blue?style=for-the-badge)](https://tr.ee/KUmTIJ)