import pip
import numpy
import matplotlib
import sklearn
import scipy
import pandas
import PIL
import seaborn
import h5py
import tensorflow
import keras


def check_version(pkg, version):
    actual = pkg.__version__.split('.')
    if len(actual) == 3:
        actual_major = '.'.join(actual[:2])
    elif len(actual) == 2:
        actual_major = '.'.join(actual)
    else:
        raise NotImplementedError(pkg.__name__ +
                                  "actual version :"+
                                  pkg.__version__)
    try:
        assert(actual_major == version)
    except Exception as ex:
        print("{} {}\t=> {}".format(pkg.__name__,
                                    version,
                                    pkg.__version__))
        raise ex



print("Houston we are go!")