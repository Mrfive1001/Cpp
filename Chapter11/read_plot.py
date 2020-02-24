import os
import sys
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle

def read_data(filename):
    points = []
    targets = []
    with open(filename) as f:
        lines = f.readlines()
        for i in range(len(lines)):
            if lines[i].startswith('Target'):
                points.append([])
                targets.append(int(lines[i].split(' ')[1]))
            else:
                if lines[i].startswith('Loop'):
                    points[-1].append([])
                else:
                    if lines[i]:
                        line = [float(number) for number in lines[i].split(',')]
                        points[-1][-1].append(line)
    return points, targets

def plot_one_figure(walk, target):
    fig = plt.figure()
    plt.title("Target = {0}, loop times = {1}".format(target, len(walk)))
    ax = fig.add_subplot(111)
    cir1 = Circle(xy = (0.0, 0.0), radius=target, alpha=0.5)
    ax.add_patch(cir1)
    for loop in range(len(walk)):
        loop_walk = np.array(walk[loop])
        plt.plot(loop_walk[:, 0], loop_walk[:, 1])
    


path = sys.path[0]
points, targets = read_data(os.path.join(path,'file.walk'))
for index in range(len(points)):
    plot_one_figure(points[index], targets[index])
plt.show()