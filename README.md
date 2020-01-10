Cluster_Toolkit_CLI
---

This application is meant to be run in a cluster environment.


Cluster_Toolkit_CLI checks (through nvapi) if Nvidia gSync is currently enabled, 
and if it seems to be working as intended. 


For licensing purposes, we don't include nvapi here, but refer to the Nvidia 
developer site for download.


# Build

In order to build this application, please download the nvapi bundle Revision 
440 and place the contents of that folder in a folder named `nvapi` in the root 
of this repository.

The VS project points out nvapi as an additional dependency, and uses the 
64-bit library file it provides.

# Requirements

- OS: Windows10
- Arch: x64

Since this CLI is intended to be used in a Display Cluster with Nvidia Quadro 
cards and GSync, the CLI will make some assumptions.



