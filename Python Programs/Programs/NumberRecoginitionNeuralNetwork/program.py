import neuralnetwork as nn
import numpy as np
# import matplotlib.pyplot as plt

with np.load('mnist.npz') as data:
     training_images = data['training_images']
     training_lables = data['training_labels']

# plt.imshow(training_images[0].reshape(28, 28), cmap='gray')
# plt.show()
# print(training_lables[0])

layer_sizes = (784, 5, 10)
# x = np.ones((layer_sizes[0], 1))

net = nn.NeuralNetwork(layer_sizes)
prediction = net.predict(training_images)
# print(np.argmax(prediction[0]))
net.print_accuracy(training_images, training_lables)