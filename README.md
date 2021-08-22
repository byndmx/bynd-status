# Bynd Status Service

### Development
```
sudo docker run \
  -it \
  --name bynd --rm \
  -p 5001:5001 \
  -v /home/ermiry/Documents/ermiry/Projects/bynd-status:/home/bynd \
  -e RUNTIME=development \
  -e PORT=5001 \
  -e CERVER_RECEIVE_BUFFER_SIZE=4096 -e CERVER_TH_THREADS=4 \
  -e CERVER_CONNECTION_QUEUE=4 \
  ermiry/bynd-status:development /bin/bash
```

## Routes

### Main

#### GET /bynd
**Description:** Bynd service top level route \
**Returns:**
  - 200 on success

#### GET /bynd/version
**Access:** Public \
**Description:** Returns bynd service current version \
**Returns:**
  - 200 and version's json on success
