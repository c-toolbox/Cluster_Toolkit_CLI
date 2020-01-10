cluster_sync_check
---

This application is meant to be run in a cluster environment.


cluster_sync_check checks (through nvapi) if Nvidia gSync is currently enabled, 
and if it seems to be working as intended. 


For licensing purposes, we don't include nvapi here, but refer to the Nvidia 
developer site for download.


# Build

In order to build this application, please download the nvapi bundle Revision 
440 and place the contents of that folder in a folder named `nvapi` in the root 
of this repository.

