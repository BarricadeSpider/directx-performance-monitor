# Usage Guide: DirectX Performance Monitor

This document details how to utilize the `directx-performance-monitor` toolkit effectively.

## Prerequisites

*   A running Windows environment (Windows 10+ recommended).
*   The target application must be utilizing DirectX 11 or DirectX 12.

## Running the Monitor

1.  **Configuration:** Verify `config/default.json` to set logging frequency and alert thresholds.
2.  **Target Selection (CLI):** Run `./monitor.exe --pid <PID> --target_app "ApplicationName"`. 
3.  **Target Selection (GUI):** Launch `Monitor.exe`, which presents a graphical interface allowing you to browse and select running processes from Task Manager.

## Key Commands & Options

| Command | Description | Example |
| :--- | :--- | :--- |
| `--log` | Start continuous CSV logging to the default output path. | `monitor.exe --pid 1234 --log` |
| `--snapshot` | Capture a single, instantaneous performance reading and exit. | `monitor.exe --pid 5678 --snapshot` |
| `-h` or `--help` | Display all available command-line arguments. | `monitor.exe -h` |

## Interpreting Metrics

*   **Frame Time (ms):** The duration (in milliseconds) required to render one complete frame. Lower is better.
*   **GPU Utilization (%):** Percentage of time the GPU hardware is actively processing rendering commands.
*   **Shader Bound:** Indicates if the pipeline is bottlenecked by vertex/pixel shader complexity.
*   **CPU Bound:** Indicates if the CPU is struggling to prepare draw calls or manage resource updates for the GPU.