pipeline {

    agent {
        docker {
            image 'ubuntu:18.04'
        }
    }

    stages {

        stage('Prepare environment') {
            steps {
                sh 'apt-get update -q'
                sh 'apt-get install cmake'
                sh 'apt-get install libglew-dev libglfw3-dev libglm-dev'
                sh 'mkdir build'
            }
        }

        stage('Build') {

            stage('gcc') {
                steps {
                    sh 'apt-get install g++'
                    sh 'g++ --version'
                    sh 'cd build'
                    sh 'cmake ..'
                    sh 'make'
                }
            }

            stage('clang') {
                steps {
                    sh 'apt-get install clang'
                    sh 'clang++ --version'
                    sh 'cd build'
                    sh 'cmake ..'
                    sh 'make'
                }
            }

        }
    }
}