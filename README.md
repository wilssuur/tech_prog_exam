# Docker Hub
https://hub.docker.com/repository/docker/wilssuur/examcontainer/general

<img width="950" alt="image" src="https://github.com/wilssuur/tech_prog_exam/assets/124897239/67f6e9a7-d6e4-47d4-b6f4-7054e76833b2">

# Commands
Построить контейнер: docker build -t MyContainerName .

Запустить контейнер: docker run -it --rm -p 33333:33333 --name my-running-app MyContainerName

Команды для загрузки образа на Docker hub:

docker build -t wilssuur/examcontainer.

docker login

docker push wilssuur/examcontainer
